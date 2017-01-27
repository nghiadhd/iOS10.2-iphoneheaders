/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, TIKeyboardCandidate, NSDictionary, TIKeyboardIntermediateText;

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding> {

	BOOL _excludedExtensionCandidates;
	NSArray* _candidates;
	unsigned long long _initialSelectedIndex;
	TIKeyboardCandidate* _defaultCandidate;
	NSArray* _sortMethods;
	NSDictionary* _sortMethodGroups;
	NSDictionary* _indexTitles;
	NSDictionary* _showExtensionCandidates;
	NSArray* _initiallyHiddenCandidates;
	unsigned long long _generatedCandidateCount;
	unsigned long long _batchCandidateLocation;
	unsigned long long _selectedHiddenCandidateIndex;
	NSArray* _proactiveTriggers;
	TIKeyboardIntermediateText* _uncommittedText;
	TIKeyboardCandidate* _acceptedCandidate;

}

@property (nonatomic,readonly) BOOL hasOnlySlottedCandidates; 
@property (nonatomic,readonly) unsigned long long slottedCandidatesCount; 
@property (nonatomic,retain) NSArray * candidates;                                         //@synthesize candidates=_candidates - In the implementation block
@property (assign,nonatomic) unsigned long long initialSelectedIndex;                      //@synthesize initialSelectedIndex=_initialSelectedIndex - In the implementation block
@property (nonatomic,copy) TIKeyboardCandidate * defaultCandidate;                         //@synthesize defaultCandidate=_defaultCandidate - In the implementation block
@property (nonatomic,retain) NSArray * sortMethods;                                        //@synthesize sortMethods=_sortMethods - In the implementation block
@property (nonatomic,retain) NSDictionary * sortMethodGroups;                              //@synthesize sortMethodGroups=_sortMethodGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * indexTitles;                                   //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,retain) NSDictionary * showExtensionCandidates;                       //@synthesize showExtensionCandidates=_showExtensionCandidates - In the implementation block
@property (nonatomic,retain) NSArray * initiallyHiddenCandidates;                          //@synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long selectedHiddenCandidateIndex;              //@synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasCandidates; 
@property (nonatomic,readonly) BOOL hasOnlyProactiveCandidates; 
@property (nonatomic,readonly) NSArray * proactiveTriggers;                                //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * firstCandidate; 
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (assign,nonatomic) BOOL excludedExtensionCandidates;                             //@synthesize excludedExtensionCandidates=_excludedExtensionCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long generatedCandidateCount;                   //@synthesize generatedCandidateCount=_generatedCandidateCount - In the implementation block
@property (assign,nonatomic) unsigned long long batchCandidateLocation;                    //@synthesize batchCandidateLocation=_batchCandidateLocation - In the implementation block
@property (nonatomic,readonly) BOOL isDummySet; 
@property (nonatomic,retain) TIKeyboardIntermediateText * uncommittedText;                 //@synthesize uncommittedText=_uncommittedText - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * acceptedCandidate;                      //@synthesize acceptedCandidate=_acceptedCandidate - In the implementation block
+(id)setWithCandidates:(id)arg1 proactiveTriggers:(id)arg2 ;
+(id)dummySet;
+(BOOL)supportsSecureCoding;
+(id)setWithCandidates:(id)arg1 ;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 ;
+(id)setWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10 ;
-(BOOL)candidatesForSortIndexShowAlternativeText:(long long)arg1 ;
-(id)candidateGroupsForSortIndex:(long long)arg1 ;
-(BOOL)hasOnlySlottedCandidates;
-(unsigned long long)slottedCandidatesCount;
-(BOOL)hasOnlyProactiveCandidates;
-(id)initWithCandidates:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 defaultCandidate:(id)arg3 sortMethods:(id)arg4 sortMethodGroups:(id)arg5 indexTitles:(id)arg6 showExtensionCandidates:(id)arg7 initiallyHiddenCandidates:(id)arg8 selectedHiddenCandidateIndex:(unsigned long long)arg9 proactiveTriggers:(id)arg10 ;
-(BOOL)isSubsetOf:(id)arg1 ;
-(void)setInitialSelectedIndex:(unsigned long long)arg1 ;
-(void)setDefaultCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)setSortMethods:(NSArray *)arg1 ;
-(void)setSortMethodGroups:(NSDictionary *)arg1 ;
-(NSDictionary *)showExtensionCandidates;
-(void)setShowExtensionCandidates:(NSDictionary *)arg1 ;
-(BOOL)excludedExtensionCandidates;
-(void)setExcludedExtensionCandidates:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)candidates;
-(BOOL)hasCandidates;
-(unsigned long long)selectedHiddenCandidateIndex;
-(NSArray *)initiallyHiddenCandidates;
-(unsigned long long)initialSelectedIndex;
-(NSDictionary *)indexTitles;
-(NSArray *)sortMethods;
-(void)setIndexTitles:(NSDictionary *)arg1 ;
-(NSDictionary *)sortMethodGroups;
-(BOOL)isDummySet;
-(TIKeyboardCandidate *)firstCandidate;
-(void)setCandidates:(NSArray *)arg1 ;
-(void)setBatchCandidateLocation:(unsigned long long)arg1 ;
-(TIKeyboardCandidate *)acceptedCandidate;
-(unsigned long long)generatedCandidateCount;
-(void)setAcceptedCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)defaultCandidate;
-(BOOL)hasMetadata;
-(TIKeyboardIntermediateText *)uncommittedText;
-(unsigned long long)batchCandidateLocation;
-(id)setByAppendingSet:(id)arg1 ;
-(unsigned long long)positionInCandidateList:(id)arg1 ;
-(void)setGeneratedCandidateCount:(unsigned long long)arg1 ;
-(void)setUncommittedText:(TIKeyboardIntermediateText *)arg1 ;
-(NSArray *)proactiveTriggers;
-(void)setInitiallyHiddenCandidates:(NSArray *)arg1 ;
-(void)setSelectedHiddenCandidateIndex:(unsigned long long)arg1 ;
@end

