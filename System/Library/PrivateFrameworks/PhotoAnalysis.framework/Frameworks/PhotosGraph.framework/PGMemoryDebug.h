/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PGMemoryDebug : NSObject {

	NSDictionary* _matchingKeywords;
	NSDictionary* _referenceKeywords;
	NSDictionary* _eventKeywords;
	double _contentScore;
	double _meanContentScore;
	double _matchingScore;
	double _graphScore;
	double _neighborScore;
	unsigned long long _numberOfPeople;
	unsigned long long _index;

}

@property (nonatomic,retain) NSDictionary * matchingKeywords;                //@synthesize matchingKeywords=_matchingKeywords - In the implementation block
@property (nonatomic,retain) NSDictionary * referenceKeywords;               //@synthesize referenceKeywords=_referenceKeywords - In the implementation block
@property (nonatomic,retain) NSDictionary * eventKeywords;                   //@synthesize eventKeywords=_eventKeywords - In the implementation block
@property (assign,nonatomic) double contentScore;                            //@synthesize contentScore=_contentScore - In the implementation block
@property (assign,nonatomic) double meanContentScore;                        //@synthesize meanContentScore=_meanContentScore - In the implementation block
@property (assign,nonatomic) double matchingScore;                           //@synthesize matchingScore=_matchingScore - In the implementation block
@property (assign,nonatomic) double graphScore;                              //@synthesize graphScore=_graphScore - In the implementation block
@property (assign,nonatomic) double neighborScore;                           //@synthesize neighborScore=_neighborScore - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeople;              //@synthesize numberOfPeople=_numberOfPeople - In the implementation block
@property (assign,nonatomic) unsigned long long index;                       //@synthesize index=_index - In the implementation block
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(NSDictionary *)referenceKeywords;
-(void)setReferenceKeywords:(NSDictionary *)arg1 ;
-(unsigned long long)numberOfPeople;
-(void)setNumberOfPeople:(unsigned long long)arg1 ;
-(double)contentScore;
-(void)setContentScore:(double)arg1 ;
-(double)matchingScore;
-(void)setMatchingScore:(double)arg1 ;
-(double)neighborScore;
-(void)setNeighborScore:(double)arg1 ;
-(double)graphScore;
-(void)setEventKeywords:(NSDictionary *)arg1 ;
-(void)setGraphScore:(double)arg1 ;
-(double)meanContentScore;
-(void)setMeanContentScore:(double)arg1 ;
-(void)setMatchingKeywords:(NSDictionary *)arg1 ;
-(NSDictionary *)matchingKeywords;
-(NSDictionary *)eventKeywords;
@end

