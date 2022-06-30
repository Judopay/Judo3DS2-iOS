//
//  JP3DSTransaction.h
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

@protocol JP3DSChallengeStatusReceiver;
@class JP3DSAuthenticationRequestParameters, JP3DSChallengeParameters;

@interface JP3DSTransaction : NSObject

/**
 * Designated initializer that creates a JP3DSTransaction instance
 *
 * @param directoryServerID - the Registered Application Provider Identifier (RID) of a payment system.
 * This 5-byte value, defined by the ISO 7816-5 standard, is used to identify the public key needed for device information encryption.
 * @param messageVersion - the protocol version according to which the transaction shall be created.
 * @param deviceData - the device data NString representation collected during initialization.
 * @param sdkAppID - the unique UUID used to identify the application the 3DS SDK is used in.
 *
 * @returns an instance of [JP3DSTransaction].
 */
- (nonnull instancetype)initWithDirectoryServerID:(nonnull NSString *)directoryServerID
                                   messageVersion:(nullable NSString *)messageVersion
                                       deviceData:(nonnull NSString *)deviceData
                                         sdkAppID:(nonnull NSString *)sdkAppID;

/**
 * Returns an instance of JP3DSAuthenticationRequestParameters containing all the required parameters
 * needed for the Authentication Request (AReq).
 *
 * @returns a configured instance of JP3DSAuthenticationRequestParameters.
 */
- (nonnull JP3DSAuthenticationRequestParameters *)getAuthenticationRequestParameters;

/**
 * Initiates the Challenge Flow where the cardholder can authenticate using an OTP or OOB method.
 *
 * @param challengeParameters - an instance of JP3DSChallengeParameters containing all the required parameters for the Challenge Request (CReq)
 * @param challengeStatusReceiver - an instance of JP3DSChallengeStatusReceiver used to handle the Challenge Flow status.
 *
 * @throws JP3DSInvalidInputException - in case the time out value passed is less than 5 minutes.
 */
- (void)doChallengeWithChallengeParameters:(nonnull JP3DSChallengeParameters *)challengeParameters
                   challengeStatusReceiver:(nullable id<JP3DSChallengeStatusReceiver>)challengeStatusReceiver
                                   timeOut:(NSUInteger)timeOut;

@end
