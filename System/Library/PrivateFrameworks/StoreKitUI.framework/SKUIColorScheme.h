/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding> {

	UIColor* _backgroundColor;
	UIColor* _highlightedTextColor;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;

}

@property (nonatomic,readonly) long long schemeStyle; 
@property (nonatomic,copy) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * highlightedTextColor;              //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,copy) UIColor * primaryTextColor;                  //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryTextColor;                //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)highlightedTextColor;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)primaryTextColor;
-(id)initWithColorSchemeDictionary:(id)arg1 ;
-(long long)schemeStyle;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
@end

