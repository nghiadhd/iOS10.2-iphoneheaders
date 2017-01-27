/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CSLNLEventClassification : NSObject {

	NSMutableDictionary* _classifiers;
	NSMutableDictionary* _features;

}

@property (nonatomic,retain) NSMutableDictionary * classifiers;              //@synthesize classifiers=_classifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * features;                 //@synthesize features=_features - In the implementation block
-(id)init;
-(NSMutableDictionary *)features;
-(void)setFeatures:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)classifiers;
-(BOOL)setFeaturesMapping:(id)arg1 classifier:(id)arg2 forLocale:(id)arg3 forAlgorithm:(id)arg4 ;
-(BOOL)setFeaturesMappingFromFile:(id)arg1 classifierFromFile:(id)arg2 forLocale:(id)arg3 forAlgorithm:(id)arg4 ;
-(BOOL)isLocaleLoaded:(id)arg1 forAlgorithm:(id)arg2 ;
-(id)readEmailsFromXMLFile:(id)arg1 locale:(id)arg2 ;
-(void)runTrainingOnEmailSet:(id)arg1 usingBiasFile:(id)arg2 dumpFeatureMappingIn:(id)arg3 dumpClassifierIn:(id)arg4 locale:(id)arg5 algorithm:(id)arg6 ;
-(id)stratifySampleEmails:(id)arg1 withTestRatio:(float)arg2 ;
-(float)runTestingOnEmailSet:(id)arg1 algorithm:(id)arg2 ;
-(id)loadBiasedEmailFromFile:(id)arg1 locale:(id)arg2 ;
-(id)classifyEmailWithSubject:(id)arg1 recipients:(id)arg2 body:(id)arg3 locale:(id)arg4 algorithm:(id)arg5 ;
-(BOOL)loadLocale:(id)arg1 algorithm:(id)arg2 ;
-(BOOL)isLocaleSupported:(id)arg1 forAlgorithm:(id)arg2 ;
-(void)runTrainingOn:(id)arg1 locale:(id)arg2 algorithm:(id)arg3 ;
-(void)runTestingOn:(id)arg1 locale:(id)arg2 algorithm:(id)arg3 ;
-(void)setClassifiers:(NSMutableDictionary *)arg1 ;
@end

