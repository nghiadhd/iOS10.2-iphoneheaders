/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDInteractionStore, NSMutableDictionary;

@interface PSEFeedbackManager : NSObject {

	_CDInteractionStore* _interactionStore;
	NSMutableDictionary* _resultsBySource;

}

@property (nonatomic,retain) NSMutableDictionary * resultsBySource;              //@synthesize resultsBySource=_resultsBySource - In the implementation block
+(id)sharedInstance;
-(void)receiveFeedback:(id)arg1 ;
-(void)setResultsBySource:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)resultsBySource;
-(id)init;
@end

