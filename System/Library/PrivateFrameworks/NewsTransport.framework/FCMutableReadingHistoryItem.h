/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol FCMutableReadingHistoryItem <FCReadingHistoryItem>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * articleID; 
@property (nonatomic,copy) NSDate * lastVisitedAt; 
@property (assign,nonatomic) unsigned long long maxVersionRead; 
@property (assign,nonatomic) BOOL hasArticleBeenRead; 
@property (assign,nonatomic) BOOL hasArticleBeenSeen; 
@property (assign,nonatomic) BOOL hasArticleBeenMarkedOffensive; 
@property (assign,nonatomic) BOOL hasArticleBeenConsumed; 
@property (assign,nonatomic) unsigned long long articleLikingStatus; 
@required
-(NSString *)identifier;
-(NSString *)articleID;
-(NSDate *)lastVisitedAt;
-(unsigned long long)maxVersionRead;
-(BOOL)hasArticleBeenRead;
-(BOOL)hasArticleBeenSeen;
-(BOOL)hasArticleBeenConsumed;
-(void)setHasArticleBeenRead:(BOOL)arg1;
-(void)setLastVisitedAt:(id)arg1;
-(void)setHasArticleBeenSeen:(BOOL)arg1;
-(unsigned long long)articleLikingStatus;
-(void)setArticleLikingStatus:(unsigned long long)arg1;
-(BOOL)hasArticleBeenMarkedOffensive;
-(void)setHasArticleBeenMarkedOffensive:(BOOL)arg1;
-(void)setHasArticleBeenConsumed:(BOOL)arg1;
-(void)setMaxVersionRead:(unsigned long long)arg1;
-(void)setArticleID:(id)arg1;

@end
