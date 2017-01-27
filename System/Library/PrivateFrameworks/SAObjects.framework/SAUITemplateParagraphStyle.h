/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAUITemplateParagraphStyle : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSNumber * firstLineHeadIndent; 
@property (nonatomic,copy) NSNumber * getParagraphSpacingBefore; 
@property (nonatomic,copy) NSNumber * headIndent; 
@property (nonatomic,copy) NSNumber * lineHeightMultiple; 
@property (nonatomic,copy) NSNumber * lineSpacing; 
@property (nonatomic,copy) NSNumber * maximumLineHeight; 
@property (nonatomic,copy) NSNumber * minimumLineHeight; 
@property (nonatomic,copy) NSNumber * paragraphSpacing; 
@property (nonatomic,copy) NSNumber * tailIndent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paragraphStyleWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)paragraphStyle;
-(void)setAlignment:(NSString *)arg1 ;
-(void)setMinimumLineHeight:(NSNumber *)arg1 ;
-(void)setMaximumLineHeight:(NSNumber *)arg1 ;
-(NSString *)alignment;
-(NSNumber *)minimumLineHeight;
-(NSNumber *)maximumLineHeight;
-(NSNumber *)lineSpacing;
-(void)setLineSpacing:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)firstLineHeadIndent;
-(void)setFirstLineHeadIndent:(NSNumber *)arg1 ;
-(NSNumber *)getParagraphSpacingBefore;
-(void)setGetParagraphSpacingBefore:(NSNumber *)arg1 ;
-(NSNumber *)headIndent;
-(NSNumber *)paragraphSpacing;
-(NSNumber *)tailIndent;
-(void)setTailIndent:(NSNumber *)arg1 ;
-(void)setParagraphSpacing:(NSNumber *)arg1 ;
-(void)setHeadIndent:(NSNumber *)arg1 ;
-(void)setLineHeightMultiple:(NSNumber *)arg1 ;
-(NSNumber *)lineHeightMultiple;
@end

