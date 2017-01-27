/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKAchievementInternal, GKGame, GKPlayer, NSString, NSDate;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	BOOL _showsCompletionBanner;
	GKAchievementInternal* _internal;
	GKGame* _game;
	GKPlayer* _player;

}

@property (nonatomic,copy) NSString * playerID; 
@property (retain) GKAchievementInternal * internal;                           //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSDate * lastReportedDate; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (nonatomic,copy,readonly) NSString * groupIdentifier; 
@property (assign,nonatomic) GKGame * game;                                    //@synthesize game=_game - In the implementation block
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) double percentComplete; 
@property (getter=isCompleted,nonatomic,readonly) BOOL completed; 
@property (assign,nonatomic) BOOL showsCompletionBanner;                       //@synthesize showsCompletionBanner=_showsCompletionBanner - In the implementation block
@property (nonatomic,retain,readonly) GKPlayer * player;                       //@synthesize player=_player - In the implementation block
+(void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
+(void)reportAchievements:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(void)reportAchievements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadAchievementsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(/*^block*/id)arg4 ;
+(void)resetAchievementsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)issueChallengeToPlayers:(id)arg1 message:(id)arg2 ;
-(void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)imageURL;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showBanner;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
-(id)activityViewControllerSubject:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(BOOL)canBeShared;
-(void)_gkSetSharingInfo:(id)arg1 ;
-(id)fetchSharingInfo;
-(id)_gkSharingInfo;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCompleted;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(GKPlayer *)player;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKAchievementInternal *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2 ;
-(void)setShowsCompletionBanner:(BOOL)arg1 ;
-(BOOL)showsCompletionBanner;
-(id)initWithIdentifier:(id)arg1 player:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2 ;
-(void)reportAchievementWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_achievementDescription;
-(NSString *)playerID;
-(void)setGame:(GKGame *)arg1 ;
-(GKGame *)game;
-(GKAchievementInternal *)internal;
@end

