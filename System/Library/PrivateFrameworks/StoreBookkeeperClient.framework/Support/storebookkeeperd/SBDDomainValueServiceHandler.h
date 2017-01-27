/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <storebookkeeperd/SBDDomainServiceHandler.h>
#import <libobjc.A.dylib/SBCDomainValueServiceProtocol.h>

@class SBKUniversalPlaybackPositionStore, NSString;

@interface SBDDomainValueServiceHandler : SBDDomainServiceHandler <SBCDomainValueServiceProtocol> {

	SBKUniversalPlaybackPositionStore* _cloudStore;

}

@property (nonatomic,readonly) SBKUniversalPlaybackPositionStore * cloudStore;              //@synthesize cloudStore=_cloudStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDomain:(id)arg1 ;
-(oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SBKUniversalPlaybackPositionStore *)cloudStore;
@end
