//
//  JP3DSDirectoryServerCertificateProvider.h
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

@class JP3DSCertificateMaterial;

NS_ASSUME_NONNULL_BEGIN

/**
 * Protocol for supplying override DS certificate material at transaction creation time.
 *
 * Implement this protocol and assign the conforming object to JP3DS2Service.certificateProvider
 * before calling createTransactionWithDirectoryServerID:messageVersion:.
 *
 * The SDK calls certificateForDirectoryServerID: once per transaction and uses the returned
 * material for AReq encryption instead of the built-in bundle certificate. Returning nil for
 * any directoryServerID falls back to the SDK's bundled certificate for that payment scheme.
 *
 * Implementations MUST NOT throw; returning nil is the documented fallback signal.
 */
@protocol JP3DSDirectoryServerCertificateProvider <NSObject>

/**
 * Return override certificate material for the given directory server ID, or nil to fall
 * back to the SDK's bundled certificate for that scheme.
 *
 * @param directoryServerID - the RID of the payment system (e.g. A000000003 for Visa).
 * @returns a JP3DSCertificateMaterial, or nil to use the built-in cert.
 */
- (nullable JP3DSCertificateMaterial *)certificateForDirectoryServerID:(NSString *)directoryServerID;

@end

NS_ASSUME_NONNULL_END
