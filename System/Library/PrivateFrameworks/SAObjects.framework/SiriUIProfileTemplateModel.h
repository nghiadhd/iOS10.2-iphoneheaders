/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SiriUIProfileTemplateModel <SiriUILabelStackTemplateModel>
@property (nonatomic,copy) NSString * imageURI; 
@property (assign,nonatomic) unsigned long long imageStyleValue; 
@required
-(void)setImageStyleValue:(unsigned long long)arg1;
-(NSString *)imageURI;
-(void)setImageURI:(id)arg1;
-(unsigned long long)imageStyleValue;
-(void)fetchUIImageForTraitCollection:(id)arg1 completion:(/*^block*/id)arg2;

@end

