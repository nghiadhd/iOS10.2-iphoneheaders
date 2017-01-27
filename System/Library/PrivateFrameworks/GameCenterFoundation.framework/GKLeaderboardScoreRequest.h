/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKPlayerInternal, NSString;

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding> {

	GKPlayerInternal* _playerInternal;
	NSString* _gameBundleID;
	NSString* _identifier;
	NSString* _groupIdentifier;
	BOOL _friendsOnly;
	long long _timeScope;
	BOOL _prefetch;

}

@property (nonatomic,copy) GKPlayerInternal * playerInternal;              //@synthesize playerInternal=_playerInternal - In the implementation block
@property (nonatomic,copy) NSString * gameBundleID;                        //@synthesize gameBundleID=_gameBundleID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * groupIdentifier;                     //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL friendsOnly;                             //@synthesize friendsOnly=_friendsOnly - In the implementation block
@property (assign,nonatomic) long long timeScope;                          //@synthesize timeScope=_timeScope - In the implementation block
@property (assign,getter=isPrefetch,nonatomic) BOOL prefetch;              //@synthesize prefetch=_prefetch - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestForPlayerInternals:(id)arg1 ;
+(id)requestForRankRange:(NSRange)arg1 ;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(GKPlayerInternal *)playerInternal;
-(void)setPlayerInternal:(GKPlayerInternal *)arg1 ;
-(void)setGameBundleID:(NSString *)arg1 ;
-(void)setFriendsOnly:(BOOL)arg1 ;
-(NSString *)gameBundleID;
-(BOOL)friendsOnly;
-(BOOL)isPrefetch;
-(void)setPrefetch:(BOOL)arg1 ;
-(long long)timeScope;
-(void)setTimeScope:(long long)arg1 ;
@end

