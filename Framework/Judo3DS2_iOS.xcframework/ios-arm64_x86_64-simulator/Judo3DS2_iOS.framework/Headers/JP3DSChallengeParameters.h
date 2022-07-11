//
//  JP3DSChallengeParameters.h
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

@interface JP3DSChallengeParameters : NSObject

/**
 * The transaction identifier assigned by the 3DS Server to uniquely identify a single transaction.
 */
@property (nonatomic, strong, nonnull) NSString *threeDSServerTransactionID;

/**
 * The ACS transaction identifier, returned as part of the Authentication Response
 */
@property (nonatomic, strong, nonnull) NSString *acsTransactionID;

/**
 * The ACS reference number, returned as part of the Authentication Response
 */
@property (nonatomic, strong, nonnull) NSString *acsRefNumber;

/**
 * The ACS signed content, encrypted via JWS, returned as part of the Authentication Response.
 * This method contains the ACS URL, ACS ephemeral public key and the SDK ephemeral public key.
 */
@property (nonatomic, strong, nonnull) NSString *acsSignedContent;

/**
 * The 3DS Requestor App URL, sent as part of the Challenge request (CReq).
 */
@property (nonatomic, strong, nullable) NSString *threeDSRequestorAppURL;

@property (nonatomic, strong, nullable) NSString *messageVersion;

/**
 * Designated initializer that sets all the required parameters for a Challenge request.
 *
 * @param threeDSServerTransactionID - the unique ID created by the 3DS Server used to identify the transaction.
 * @param acsTransactionID - the unique ID created by the ACS used to identify the transaction.
 * @param acsRefNumber - a reference number returned by the ACS as part of the Authentication Response.
 * @param acsSignedContent - the signed content containing details for establishing a secure SDK-ACS communication.
 * @param threeDSRequestorAppURL - the 3DS Requestor App URL.
 *
 * @returns a configured instance of JP3DSChallengeParameters.
 */
- (nonnull instancetype)initWithThreeDSServerTransactionID:(nonnull NSString *)threeDSServerTransactionID
                                          acsTransactionID:(nonnull NSString *)acsTransactionID
                                              acsRefNumber:(nonnull NSString *)acsRefNumber
                                          acsSignedContent:(nonnull NSString *)acsSignedContent
                                    threeDSRequestorAppURL:(nullable NSString *)threeDSRequestorAppURL
                                            messageVersion:(nullable NSString *)version;

@end
