/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSFormsMetadataProvider.h>

@class NSArray, NSString;

@interface WBUFormsMetadataProviderWK1 : NSObject <WBSFormsMetadataProvider> {

	NSArray* _framesForAllForms;
	NSArray* _metadataForAllForms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long formCount; 
+(id)metadataProviderWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
-(void)enumerateFormsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)formCount;
-(id)initWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
@end
