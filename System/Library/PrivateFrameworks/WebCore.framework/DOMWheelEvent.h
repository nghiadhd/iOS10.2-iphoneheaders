/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMMouseEvent.h>

@interface DOMWheelEvent : DOMMouseEvent

@property (readonly) int wheelDeltaX; 
@property (readonly) int wheelDeltaY; 
@property (readonly) int wheelDelta; 
@property (readonly) BOOL isHorizontal; 
-(double)deltaX;
-(double)deltaY;
-(double)deltaZ;
-(unsigned)deltaMode;
-(int)wheelDeltaX;
-(int)wheelDeltaY;
-(int)wheelDelta;
-(BOOL)webkitDirectionInvertedFromDevice;
-(void)initWheelEvent:(int)arg1 wheelDeltaY:(int)arg2 view:(id)arg3 screenX:(int)arg4 screenY:(int)arg5 clientX:(int)arg6 clientY:(int)arg7 ctrlKey:(BOOL)arg8 altKey:(BOOL)arg9 shiftKey:(BOOL)arg10 metaKey:(BOOL)arg11 ;
-(BOOL)isHorizontal;
@end

