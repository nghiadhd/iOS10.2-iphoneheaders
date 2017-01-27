/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge {

	GKAchievement* _achievement;

}

@property (nonatomic,retain) GKAchievement * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(id)alertGoalText;
-(id)iconSource;
-(id)smallIconURLString;
-(id)iconURLString;
-(id)listTitleText;
-(id)listGoalText;
-(id)composeGoalText;
-(id)detailGoalText;
-(void)dealloc;
-(id)description;
-(id)titleText;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(id)arg1 ;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2 ;
-(GKAchievement *)achievement;
-(void)setAchievement:(GKAchievement *)arg1 ;
@end

