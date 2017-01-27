/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadOperation : ISOperation <ISOperationDelegate> {

	FinishDownloadMemoryEntity* _download;
	NSString* _handlerReleasedDownloadPhase;
	NSString* _initialDownloadPhase;
	/*^block*/id _outputBlock;
	long long _stopResult;

}

@property (nonatomic,readonly) long long downloadIdentifier; 
@property (nonatomic,copy) NSString * handlerReleasedDownloadPhase; 
@property (nonatomic,copy) NSString * initialDownloadPhase; 
@property (copy) id outputBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopWithFinishResult:(long long)arg1 ;
-(void)setInitialDownloadPhase:(NSString *)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 databaseSession:(id)arg2 ;
-(void)setHandlerReleasedDownloadPhase:(NSString *)arg1 ;
-(id)_stepOperations;
-(NSString *)handlerReleasedDownloadPhase;
-(NSString *)initialDownloadPhase;
-(id)_downloadSessionPropertiesWithDownloadPhase:(id)arg1 ;
-(void)_sendProgressToDelegate:(id)arg1 ;
-(id)_finishResult:(long long)arg1 ;
-(BOOL)_needsDRMOperationForDownloadKind:(id)arg1 ;
-(void)run;
-(long long)downloadIdentifier;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
@end

