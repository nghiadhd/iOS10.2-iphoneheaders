/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>
#import <Intents/SiriUIProfileTemplateModel.h>

@class NSString, NSArray;

@interface SAIntentGroupProfileSnippetTemplate : SAIntentGroupSnippetTemplate <SiriUIProfileTemplateModel>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * labelComponents; 
@property (nonatomic,readonly) unsigned long long paddingValue; 
@property (nonatomic,readonly) unsigned long long alignmentValue; 
@property (nonatomic,copy) NSString * imageURI; 
@property (assign,nonatomic) unsigned long long imageStyleValue; 
@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSString * imageStyle; 
@property (nonatomic,copy) NSArray * labelComponents; 
+(id)profileSnippetTemplate;
+(id)profileSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAlignmentValue:(unsigned long long)arg1 ;
-(void)setImageStyleValue:(unsigned long long)arg1 ;
-(Class)templateViewControllerClass;
-(unsigned long long)alignmentValue;
-(unsigned long long)paddingValue;
-(unsigned long long)imageStyleValue;
-(void)fetchUIImageForTraitCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAlignment:(NSString *)arg1 ;
-(NSString *)alignment;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)labelComponents;
-(void)setLabelComponents:(NSArray *)arg1 ;
-(NSString *)imageStyle;
-(void)setImageStyle:(NSString *)arg1 ;
-(NSString *)imageURI;
-(void)setImageURI:(NSString *)arg1 ;
@end

