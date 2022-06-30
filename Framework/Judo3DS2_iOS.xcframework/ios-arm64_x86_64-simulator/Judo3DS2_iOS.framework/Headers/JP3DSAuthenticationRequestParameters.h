//
//  JP3DSAuthenticationRequestParameters.h
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

@interface JP3DSAuthenticationRequestParameters : NSObject

/**
 * The unique UUID used to identify a transaction.
 */
@property (nonatomic, strong, nonnull) NSString *sdkTransactionID;

/**
 * The encrypted device data used to authenticate the cardholder.
 */
@property (nonatomic, strong, nullable) NSString *deviceData;

/**
 * An ASN.1 formatted public ephemeral key, used for SDK - ACS communication.
 */
@property (nonatomic, strong, nonnull) NSString *sdkEphemeralPublicKey;

/**
 * The unique ID used to identify the application.
 */
@property (nonatomic, strong, nonnull) NSString *sdkAppID;

/**
 * A reference number issued by EMVCo after approval.
 */
@property (nonatomic, strong, nonnull) NSString *sdkReferenceNumber;

/**
 * The protocol version of the SDK used for the transaction.
 */
@property (nonatomic, strong, nonnull) NSString *messageVersion;

/**
 * Designated initializer that creates a JP3DSAuthenticationRequestParameters instance with all the necessary parameters.
 *
 * @param sdkTransactionID - the unique UUID used to identify a transaction.
 * @param deviceData - the encrypted device data used to authenticate the cardholder.
 * @param sdkEphemeralPublicKey - an ASN.1 formatted public ephemeral key, used for SDK - ACS communication.
 * @param sdkAppID - the unique ID used to identify the application.
 * @param sdkReferenceNumber - a reference number issued by EMVCo after approval.
 * @param messageVersion - the protocol version of the SDK used for the transaction.
 *
 * @returns a configured instance of JP3DSAuthenticationRequestParameters
 *
 * @throws JP3DSInvalidInputException - thrown if mandatory parameters are missing or if parameters are of invalid type.
 */
- (nonnull instancetype)initWithSDKTransactionID:(nonnull NSString *)sdkTransactionID
                                      deviceData:(nullable NSString *)deviceData
                           sdkEphemeralPublicKey:(nonnull NSString *)sdkEphemeralPublicKey
                                        sdkAppID:(nonnull NSString *)sdkAppID
                              sdkReferenceNumber:(nonnull NSString *)sdkReferenceNumber
                                  messageVersion:(nonnull NSString *)messageVersion;

@end
