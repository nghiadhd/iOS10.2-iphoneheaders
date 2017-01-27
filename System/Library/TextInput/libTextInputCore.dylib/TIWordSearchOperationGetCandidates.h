/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class NSString, TIWordSearchCandidateResultSet, NSArray, TIWordSearch;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {

	BOOL _predictionEnabled;
	BOOL _reanalysisMode;
	NSString* _inputString;
	TIWordSearchCandidateResultSet* _results;
	id _target;
	NSArray* _geometryModelData;
	SEL _action;
	TIWordSearch* _wordSearch;
	unsigned long long _autocapitalizationType;

}

@property (retain) TIWordSearch * wordSearch;                                          //@synthesize wordSearch=_wordSearch - In the implementation block
@property (nonatomic,retain) TIWordSearchCandidateResultSet * results;                 //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSString * inputString;                                 //@synthesize inputString=_inputString - In the implementation block
@property (nonatomic,readonly) id target;                                              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL predictionEnabled;                                 //@synthesize predictionEnabled=_predictionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL reanalysisMode;                                    //@synthesize reanalysisMode=_reanalysisMode - In the implementation block
@property (nonatomic,readonly) unsigned long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) NSArray * geometryModelData;                            //@synthesize geometryModelData=_geometryModelData - In the implementation block
-(void)dealloc;
-(SEL)action;
-(id)target;
-(unsigned long long)autocapitalizationType;
-(NSString *)inputString;
-(void)perform;
-(TIWordSearchCandidateResultSet *)results;
-(void)setResults:(TIWordSearchCandidateResultSet *)arg1 ;
-(NSArray *)geometryModelData;
-(TIWordSearch *)wordSearch;
-(void)setWordSearch:(TIWordSearch *)arg1 ;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 predictionEnabled:(BOOL)arg3 reanalysisMode:(BOOL)arg4 autocapitalizationType:(unsigned long long)arg5 target:(id)arg6 action:(SEL)arg7 geometryModelData:(id)arg8 ;
-(void)checkForCachedResults;
-(void)completeSearchOnMainThreadWithResults:(id)arg1 ;
-(BOOL)predictionEnabled;
-(BOOL)reanalysisMode;
@end

