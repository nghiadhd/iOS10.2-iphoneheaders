/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UITextSelectionRectImpl;

@interface UITextSelectionRect : NSObject

@property (getter=_isImpl,nonatomic,readonly) UITextSelectionRectImpl * isImpl; 
@property (nonatomic,readonly) CGRect rect; 
@property (nonatomic,readonly) long long writingDirection; 
@property (nonatomic,readonly) BOOL containsStart; 
@property (nonatomic,readonly) BOOL containsEnd; 
@property (nonatomic,readonly) BOOL isVertical; 
+(BOOL)startIsHorizontal:(id)arg1 ;
+(CGRect)startEdgeFromRects:(id)arg1 ;
+(CGRect)endEdgeFromRects:(id)arg1 ;
+(BOOL)endIsHorizontal:(id)arg1 ;
+(id)startRectFromRects:(id)arg1 ;
+(id)endRectFromRects:(id)arg1 ;
-(CGRect)rect;
-(id)range;
-(long long)writingDirection;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(BOOL)isVertical;
-(id)_isImpl;
@end

