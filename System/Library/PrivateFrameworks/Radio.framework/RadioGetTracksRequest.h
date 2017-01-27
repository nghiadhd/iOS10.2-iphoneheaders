/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, NSNumber, NSDictionary, NSData, SSVPlaybackLease, RadioPlayEventCollection, NSArray, RadioPlaybackContext, RadioStationMatchContext;

@interface RadioGetTracksRequest : RadioRequest {

	unsigned long long _globalVersion;
	BOOL _hasSetWillContinuePlayback;
	BOOL _includeCleanTracksOnly;
	unsigned long long _numberOfTracks;
	SSURLConnectionRequest* _request;
	BOOL _shouldIncludeStationInResponse;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationStringID;
	BOOL _shouldIncludeAsset;
	BOOL _skipPromptForSeamlessPlayback;
	BOOL _willContinuePlayback;
	NSNumber* _accountUniqueIdentifier;
	NSDictionary* _additionalRequestParameters;
	NSData* _heartbeatTokenData;
	SSVPlaybackLease* _playbackLease;
	RadioPlayEventCollection* _playEventCollection;
	NSArray* _playActivityEvents;
	RadioPlaybackContext* _playbackContext;
	long long _reasonType;
	RadioStationMatchContext* _stationMatchContext;
	RadioStationMatchContext* _nowPlayingMatchContext;

}

@property (nonatomic,copy,readonly) NSNumber * accountUniqueIdentifier;                      //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestParameters;                       //@synthesize additionalRequestParameters=_additionalRequestParameters - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTracks;                              //@synthesize numberOfTracks=_numberOfTracks - In the implementation block
@property (nonatomic,copy) NSData * heartbeatTokenData;                                      //@synthesize heartbeatTokenData=_heartbeatTokenData - In the implementation block
@property (assign,nonatomic) BOOL includeCleanTracksOnly;                                    //@synthesize includeCleanTracksOnly=_includeCleanTracksOnly - In the implementation block
@property (nonatomic,retain) SSVPlaybackLease * playbackLease;                               //@synthesize playbackLease=_playbackLease - In the implementation block
@property (nonatomic,copy) RadioPlayEventCollection * playEventCollection;                   //@synthesize playEventCollection=_playEventCollection - In the implementation block
@property (nonatomic,copy) NSArray * playActivityEvents;                                     //@synthesize playActivityEvents=_playActivityEvents - In the implementation block
@property (nonatomic,copy) RadioPlaybackContext * playbackContext;                           //@synthesize playbackContext=_playbackContext - In the implementation block
@property (assign,nonatomic) long long reasonType;                                           //@synthesize reasonType=_reasonType - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeAsset;                                        //@synthesize shouldIncludeAsset=_shouldIncludeAsset - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStationInResponse;                            //@synthesize shouldIncludeStationInResponse=_shouldIncludeStationInResponse - In the implementation block
@property (assign,nonatomic) BOOL skipPromptForSeamlessPlayback;                             //@synthesize skipPromptForSeamlessPlayback=_skipPromptForSeamlessPlayback - In the implementation block
@property (nonatomic,retain) RadioStationMatchContext * stationMatchContext;                 //@synthesize stationMatchContext=_stationMatchContext - In the implementation block
@property (nonatomic,retain) RadioStationMatchContext * nowPlayingMatchContext;              //@synthesize nowPlayingMatchContext=_nowPlayingMatchContext - In the implementation block
@property (assign,nonatomic) BOOL willContinuePlayback;                                      //@synthesize willContinuePlayback=_willContinuePlayback - In the implementation block
-(NSNumber *)accountUniqueIdentifier;
-(id)init;
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIncludeCleanTracksOnly:(BOOL)arg1 ;
-(BOOL)includeCleanTracksOnly;
-(id)_playbackContextForStation:(id)arg1 ;
-(BOOL)skipPromptForSeamlessPlayback;
-(id)initWithStationStringID:(id)arg1 globalVersion:(unsigned long long)arg2 ;
-(NSDictionary *)additionalRequestParameters;
-(NSData *)heartbeatTokenData;
-(RadioPlayEventCollection *)playEventCollection;
-(void)setPlayEventCollection:(RadioPlayEventCollection *)arg1 ;
-(NSArray *)playActivityEvents;
-(BOOL)shouldIncludeAsset;
-(void)setStationMatchContext:(RadioStationMatchContext *)arg1 ;
-(void)setNowPlayingMatchContext:(RadioStationMatchContext *)arg1 ;
-(void)setWillContinuePlayback:(BOOL)arg1 ;
-(RadioStationMatchContext *)stationMatchContext;
-(void)setNumberOfTracks:(unsigned long long)arg1 ;
-(void)setShouldIncludeStationInResponse:(BOOL)arg1 ;
-(SSVPlaybackLease *)playbackLease;
-(void)setPlaybackLease:(SSVPlaybackLease *)arg1 ;
-(RadioStationMatchContext *)nowPlayingMatchContext;
-(BOOL)willContinuePlayback;
-(id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2 ;
-(id)initWithGlobalVersion:(unsigned long long)arg1 ;
-(RadioPlaybackContext *)playbackContext;
-(long long)reasonType;
-(void)setPlaybackContext:(RadioPlaybackContext *)arg1 ;
-(void)setReasonType:(long long)arg1 ;
-(void)setShouldIncludeAsset:(BOOL)arg1 ;
-(unsigned long long)numberOfTracks;
-(BOOL)shouldIncludeStationInResponse;
-(void)setHeartbeatTokenData:(NSData *)arg1 ;
-(void)setSkipPromptForSeamlessPlayback:(BOOL)arg1 ;
-(void)setAdditionalRequestParameters:(NSDictionary *)arg1 ;
-(void)setPlayActivityEvents:(NSArray *)arg1 ;
@end

