//
//  JP3DSCertificateMaterial.h
//  Judo3DS2_iOS
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Holds injected DS certificate material for the AReq encryption path.
 *
 * Supply an instance via JP3DSDirectoryServerCertificateProvider to override the SDK's
 * built-in bundle certificates at transaction time. If the provider returns nil, or if
 * the PEM fails to parse, the SDK falls back to its bundled certificate automatically.
 */
@interface JP3DSCertificateMaterial : NSObject

/**
 * The DS leaf certificate as PEM text, including -----BEGIN/END CERTIFICATE----- armor.
 * Parsed internally by the existing getCertificateDataForCertificateString path.
 */
@property (nonatomic, copy) NSString *certificatePEM;

/**
 * The key identifier written into the JWE `kid` header of the AReq.
 * Must match the certificate — the DS uses this to select the correct decryption key.
 * A rotated certificate carries a new kid, so this field is mandatory.
 */
@property (nonatomic, copy) NSString *keyID;

/**
 * Optional root certificates in PEM text format.
 * Carried for forward-compatibility; not yet enforced in ACS JWS validation.
 */
@property (nonatomic, copy, nullable) NSArray<NSString *> *rootCertificatesPEM;

/**
 * Designated initializer.
 *
 * @param pem   - the DS leaf certificate as PEM text (with BEGIN/END CERTIFICATE armor).
 * @param keyID - the key identifier that matches this certificate.
 */
- (instancetype)initWithCertificatePEM:(NSString *)pem keyID:(NSString *)keyID;

@end

NS_ASSUME_NONNULL_END
