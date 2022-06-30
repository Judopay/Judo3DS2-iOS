//
//  JP3DSProtocolErrorEvent.h
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

@class JP3DSErrorMessage;

@interface JP3DSProtocolErrorEvent : NSObject

/**
 * The error message of the protocol error event.
 */
@property (nonatomic, strong, nonnull) JP3DSErrorMessage *errorMessage;

/**
 * The SDK transaction ID associated with the protocol error event.
 */
@property (nonatomic, strong, nonnull) NSString *sdkTransactionID;

/**
 * Designated initializer which creates an instance of JP3DSProtocolErrorEvent.
 *
 * @param errorMessage - the error message of the protocol error event.
 * @param sdkTransactionID - the SDK transaction ID associated with the protocol error event.
 *
 * @returns a configured instance of JP3DSProtocolErrorEvent.
 */
- (nonnull instancetype)initWithErrorMessage:(nonnull JP3DSErrorMessage *)errorMessage
                            sdkTransactionID:(nonnull NSString *)sdkTransactionID;

@end
