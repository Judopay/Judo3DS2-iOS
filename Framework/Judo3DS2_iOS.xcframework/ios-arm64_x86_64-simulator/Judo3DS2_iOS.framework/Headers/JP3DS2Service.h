//
//  JP3DS2Service.h
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

@class JP3DSConfigParameters, JP3DSTransaction, JP3DSUICustomization, JP3DSWarning;

@interface JP3DS2Service : NSObject

/**
 * Initializes the 3DS SDK.
 *
 * @param configParameters - configuration information used during initialization.
 * @param locale - the app's user interface locale. If no value is provided, the default device locale is used.
 * @param uiCustomization - UI configuration information used to specify the UI layout and theme.
 *
 * @throws JP3DSInvalidInputException - thrown if mandatory parameters are missing or if parameters are of invalid type.
 * @throws JP3DSSDKAlreadyInitializedException - thrown if the 3DS SDK instance has already been initialized.
 * @throws JP3DSSDKRuntimeException - thrown if an internal error is encountered by the 3DS SDK.
 */
- (void)initializeWithConfigParameters:(nonnull JP3DSConfigParameters *)configParameters
                                locale:(nullable NSString *)locale
                       uiCustomization:(nullable JP3DSUICustomization *)uiCustomization;

/**
 * Creates an instance of [JP3DSTransaction] containing the data required to perform a transaction.
 *
 * @param directoryServerID - the Registered Application Provider Identifier (RID) of a payment system.
 * This 5-byte value, defined by the ISO 7816-5 standard, is used to identify the public key needed for device information encryption.
 * @param messageVersion - the protocol version according to which the transaction shall be created.
 *
 * @returns an instance of [JP3DSTransaction].
 *
 * @throws JP3DSInvalidInputException - thrown if mandatory parameters are missing or if parameters are of invalid type.
 * Also includes an invalid Directory Server ID, as well as an unsupported protocol version.
 * @throws JP3DSSDKNotInitializedException - thrown if the 3DS SDK instance has not been initialized.
 * @throws JP3DSSDKRuntimeException - thrown if an internal error is encountered by the 3DS SDK.
 */
- (nonnull JP3DSTransaction *)createTransactionWithDirectoryServerID:(nonnull NSString *)directoryServerID
                                                      messageVersion:(nullable NSString *)messageVersion;

/**
 * Free up resources used by the 3DS SDK.
 * To be called only once during 3DS Requestor App session.
 *
 * @throws JP3DSSDKNotInitializedException - thrown if the 3DS SDK instance has not been initialized.
 */
- (void)cleanUp;

/**
 * Returns the 3DS SDK version.
 *
 * @returns the NSString value of the 3DS SDK version.
 *
 * @throws JP3DSSDKNotInitializedException - thrown if the 3DS SDK instance has not been initialized.
 * @throws JP3DSSDKRuntimeException - thrown if an internal error is encountered by the 3DS SDK.
 */
- (nonnull NSString *)getSDKVersion;

/**
 * Returns a list of warnings produced by the 3DS SDK during initialization.
 *
 * @returns an array of [JP3DSWarning] objects describing the collected security warnings.
 *
 * @throws JP3DSSDKNotInitializedException - thrown if the 3DS SDK instance has not been initialized.
 */
- (nonnull NSArray<JP3DSWarning *> *)getWarnings;

@end
