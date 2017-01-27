/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOExperimentServerProxyDelegate.h>

@protocol GEOExperimentServerProxy;
@class GEOABAssignmentResponse, NSLock, NSMutableArray, NSDictionary, NSString;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {

	id<GEOExperimentServerProxy> _serverProxy;
	GEOABAssignmentResponse* _experimentsInfo;
	NSLock* _experimentsInfoLock;
	NSMutableArray* _experimentObservers;
	NSLock* _experimentObserversLock;
	NSDictionary* _debugClientConfig;

}

@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setServerProxyClass:(Class)arg1 ;
+(id)sharedConfiguration;
-(id)init;
-(void)dealloc;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(id)_debugClientConfig;
-(void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2 ;
-(GEOABAssignmentResponse *)experimentsInfo;
-(id)experimentAssignments;
-(id)clientConfig;
-(id)_parsecClientMetadata;
-(id)_siriClientMetadata;
-(id)_reportAProblemClientMetadata;
-(id)experimentAssignmentForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(id)experimentURLForURL:(id)arg1 type:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(id)clientConfigurationValueForKey:(id)arg1 ;
-(void)addExperimentObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeExperimentObserver:(id)arg1 ;
-(void)_fetchAllAvailableExperimentsResponse:(/*^block*/id)arg1 ;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1 ;
-(void)_debug_forceUpdate;
-(id)_debug_configurationDate;
-(id)_debug_defaultQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(id)_debug_customQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2 ;
-(void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)_debug_forEachExperimentType:(/*^block*/id)arg1 ;
-(void)_debug_setActiveExperimentBranch:(id)arg1 ;
-(void)_setActiveExperimentBranchDictionaryRepresentation:(id)arg1 ;
@end

