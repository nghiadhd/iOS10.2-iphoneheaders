/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewSetPlacement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <NSSecureCoding> {

	CGPoint _normalizedOffset;
	UIEdgeInsets _chromeBuffer;

}

@property (assign,nonatomic) CGPoint normalizedOffset;               //@synthesize normalizedOffset=_normalizedOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chromeBuffer;              //@synthesize chromeBuffer=_chromeBuffer - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placementWithUndockedOffset:(CGPoint)arg1 chromeBuffer:(UIEdgeInsets)arg2 ;
+(id)infoWithPoint:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isUndocked;
-(void)setNormalizedOffset:(CGPoint)arg1 ;
-(BOOL)inputViewWillAppear;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(double)heightOfInputViews:(id)arg1 ;
-(UIEdgeInsets)chromeBuffer;
-(CGPoint)normalizedOffset;
-(void)setChromeBuffer:(UIEdgeInsets)arg1 ;
@end
