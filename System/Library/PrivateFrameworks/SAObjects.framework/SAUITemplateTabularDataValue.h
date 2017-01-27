/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class SAUITemplateAttributedString, SAUIImageResource;

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem

@property (nonatomic,retain) SAUITemplateAttributedString * attributedText; 
@property (assign,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) SAUIImageResource * image; 
+(id)tabularDataValue;
+(id)tabularDataValueWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setAttributedText:(SAUITemplateAttributedString *)arg1 ;
-(SAUIImageResource *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(SAUITemplateAttributedString *)attributedText;
-(BOOL)highlighted;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

