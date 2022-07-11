//
//  JP3DSErrorMessage.h
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

@interface JP3DSErrorMessage : NSObject

/**
 * The error code.
 */
@property (nonatomic, strong, nonnull) NSString *errorCode;

/**
 * The component that identified the error.
 */
@property (nonatomic, strong, nonnull) NSString *errorComponent;

/**
 * The text describing the error.
 */
@property (nonatomic, strong, nonnull) NSString *errorDescription;

/**
 * Additional error details.
 */
@property (nonatomic, strong, nonnull) NSString *errorDetails;

/**
 * The message type that was identified as erroneous.
 */
@property (nonatomic, strong, nonnull) NSString *errorMessageType;

/**
 * Protocol version identifier.
 */
@property (nonatomic, strong, nonnull) NSString *messageVersionNumber;

/**
 * Designated initializer that creates a JP3DSErrorMessage instance.
 *
 * @param errorCode - the error code.
 * @param errorComponent - the component that identified the error.
 * @param errorDescription - the text describing the error.
 * @param errorDetails - additional error details.
 * @param errorMessageType - the message type that was identified as erroneous.
 * @param messageVersionNumber - protocol version identifier.
 *
 * @returns a configured instance of JP3DSErrorMessage.
 */
- (nonnull instancetype)initWithErrorCode:(nonnull NSString *)errorCode
                           errorComponent:(nonnull NSString *)errorComponent
                         errorDescription:(nonnull NSString *)errorDescription
                             errorDetails:(nonnull NSString *)errorDetails
                         errorMessageType:(nonnull NSString *)errorMessageType
                     messageVersionNumber:(nonnull NSString *)messageVersionNumber;

@end
