/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, FCHeadlineThumbnail, NSURL, NSArray, FCCoverArt, FCTopStoriesStyleConfiguration;


@protocol FCHeadlineProviding <NSObject,NSCopying,FCFeedElement,FCClassifiable,FCFeedTransformationItem>
@property (nonatomic,copy,readonly) NSString * versionIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * referencedArticleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,copy,readonly) NSString * primaryAudience; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) unsigned long long publisherArticleVersion; 
@property (nonatomic,readonly) unsigned long long backendArticleVersion; 
@property (nonatomic,copy,readonly) NSObject*<FCChannelProviding> sourceChannel; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,readonly) CGRect thumbnailFocalFrame; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,readonly) CGSize largestThumbnailSize; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnail; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailMedium; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailUltraHQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetLQ; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidget; 
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetHQ; 
@property (nonatomic,copy,readonly) NSString * shortExcerpt; 
@property (nonatomic,copy,readonly) NSString * accessoryText; 
@property (nonatomic,copy,readonly) NSURL * contentURL; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,copy,readonly) NSDate * lastFetchedDate; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,copy,readonly) NSArray * topicScores; 
@property (nonatomic,copy,readonly) NSArray * topicFlags; 
@property (nonatomic,copy,readonly) NSArray * endOfArticleTopicIDs; 
@property (nonatomic,readonly) NSURL * videoURL; 
@property (nonatomic,readonly) double videoDuration; 
@property (getter=isFeatureCandidate,nonatomic,readonly) BOOL featureCandidate; 
@property (getter=isSponsored,nonatomic,readonly) BOOL sponsored; 
@property (nonatomic,copy,readonly) NSArray * iAdCategories; 
@property (nonatomic,copy,readonly) NSArray * iAdKeywords; 
@property (nonatomic,copy,readonly) NSArray * iAdSectionIDs; 
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs; 
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL isDraft; 
@property (nonatomic,copy,readonly) NSString * localDraftPath; 
@property (nonatomic,copy,readonly) NSArray * relatedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * moreFromPublisherArticleIDs; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,readonly) FCCoverArt * coverArt; 
@property (nonatomic,readonly) BOOL needsRapidUpdates; 
@property (nonatomic,copy,readonly) NSString * surfacedBySectionID; 
@property (nonatomic,copy,readonly) NSString * surfacedByChannelID; 
@property (nonatomic,copy,readonly) NSString * surfacedByTopicID; 
@property (nonatomic,copy,readonly) NSString * surfacedByBinID; 
@property (nonatomic,readonly) double tileProminenceScore; 
@property (getter=isTopStory,nonatomic,readonly) BOOL topStory; 
@property (nonatomic,readonly) BOOL usesImageOnTopLayout; 
@property (nonatomic,readonly) unsigned long long feedOrder; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) unsigned long long storyType; 
@property (nonatomic,readonly) FCTopStoriesStyleConfiguration * storyStyle; 
@property (nonatomic,copy,readonly) NSDate * displayDate; 
@property (nonatomic,readonly) BOOL showSubscriptionRequiredText; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@optional
-(id)contentManifestWithContext:(id)arg1;

@required
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)subtitle;
-(FCHeadlineThumbnail *)thumbnail;
-(NSString *)sourceName;
-(NSDate *)lastModifiedDate;
-(BOOL)hasThumbnail;
-(NSURL *)contentURL;
-(NSString *)accessoryText;
-(NSString *)versionIdentifier;
-(double)videoDuration;
-(NSURL *)videoURL;
-(unsigned long long)contentType;
-(BOOL)isDeleted;
-(NSString *)articleID;
-(NSString *)localDraftPath;
-(NSString *)primaryAudience;
-(NSDate *)publishDate;
-(NSObject*<FCChannelProviding>)sourceChannel;
-(NSString *)shortExcerpt;
-(NSArray *)topicIDs;
-(NSArray *)endOfArticleTopicIDs;
-(BOOL)isFeatureCandidate;
-(BOOL)isSponsored;
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(NSArray *)iAdSectionIDs;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isDraft;
-(NSString *)surfacedByBinID;
-(NSString *)surfacedBySectionID;
-(NSString *)surfacedByChannelID;
-(NSString *)surfacedByTopicID;
-(BOOL)isTopStory;
-(double)tileProminenceScore;
-(BOOL)usesImageOnTopLayout;
-(NSDate *)displayDate;
-(unsigned long long)storyType;
-(NSString *)referencedArticleID;
-(NSString *)clusterID;
-(unsigned long long)publisherArticleVersion;
-(unsigned long long)backendArticleVersion;
-(CGRect)thumbnailFocalFrame;
-(CGSize)largestThumbnailSize;
-(FCHeadlineThumbnail *)thumbnailLQ;
-(FCHeadlineThumbnail *)thumbnailMedium;
-(FCHeadlineThumbnail *)thumbnailHQ;
-(FCHeadlineThumbnail *)thumbnailUltraHQ;
-(NSDate *)lastFetchedDate;
-(NSArray *)topicFlags;
-(NSArray *)relatedArticleIDs;
-(NSArray *)moreFromPublisherArticleIDs;
-(FCTopStoriesStyleConfiguration *)storyStyle;
-(BOOL)needsRapidUpdates;
-(long long)minimumNewsVersion;
-(BOOL)isPaid;
-(FCCoverArt *)coverArt;
-(double)globalUserFeedback;
-(NSArray *)topicScores;
-(FCHeadlineThumbnail *)thumbnailWidgetLQ;
-(FCHeadlineThumbnail *)thumbnailWidget;
-(FCHeadlineThumbnail *)thumbnailWidgetHQ;
-(unsigned long long)feedOrder;
-(BOOL)showSubscriptionRequiredText;
-(BOOL)isBlockedExplicitContent;

@end

