//
//  JP3DSChallengeStatusReceiver.h
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

@class JP3DSTransaction, JP3DSCompletionEvent, JP3DSProtocolErrorEvent, JP3DSRuntimeErrorEvent;

@protocol JP3DSChallengeStatusReceiver

/**
 * A callout method called once the Challenge process is completed.
 *
 * @param completionEvent - the JP3DSCompletionEvent instance desciribing the Challenge flow result.
 */
- (void)transactionCompletedWithCompletionEvent:(JP3DSCompletionEvent *)completionEvent;

/**
 * A callout method called once the Challenge process is cancelled.
 */
- (void)transactionCancelled;

/**
 * A callout method called once the Challenge process has timed out.
 */
- (void)transactionTimedOut;

/**
 * A callout method called once the Challenge process encounters a protocol error.
 *
 * @param protocolErrorEvent - the JP3DSProtocolErrorEvent instance describing the protocol error event.
 */
- (void)transactionFailedWithProtocolErrorEvent:(JP3DSProtocolErrorEvent *)protocolErrorEvent;

/**
 * A callout method called once the Challenge process encounters a runtime error.
 *
 * @param runtimeErrorEvent - the JP3DSRuntimeErrorEvent instance describing the runtime error event.
 */
- (void)transactionFailedWithRuntimeErrorEvent:(JP3DSRuntimeErrorEvent *)runtimeErrorEvent;

@end
