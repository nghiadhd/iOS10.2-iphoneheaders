/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCTagRecordSource, FCCKDatabase, FCAssetManager, NSString, FCStreamingResults, NSError;

@interface FCTagsSearchOperation : FCOperation {

	/*^block*/id _searchResultsBlock;
	FCTagRecordSource* _tagRecordSource;
	FCCKDatabase* _contentDatabase;
	FCAssetManager* _assetManager;
	NSString* _searchString;
	unsigned long long _tagType;
	unsigned long long _batchSize;
	FCStreamingResults* _searchResults;
	NSError* _searchError;

}

@property (nonatomic,retain) FCTagRecordSource * tagRecordSource;              //@synthesize tagRecordSource=_tagRecordSource - In the implementation block
@property (nonatomic,retain) FCCKDatabase * contentDatabase;                   //@synthesize contentDatabase=_contentDatabase - In the implementation block
@property (nonatomic,retain) FCAssetManager * assetManager;                    //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,copy) NSString * searchString;                            //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) unsigned long long tagType;                       //@synthesize tagType=_tagType - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                     //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) FCStreamingResults * searchResults;               //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSError * searchError;                            //@synthesize searchError=_searchError - In the implementation block
@property (copy) id searchResultsBlock;                                        //@synthesize searchResultsBlock=_searchResultsBlock - In the implementation block
-(id)init;
-(NSString *)searchString;
-(FCAssetManager *)assetManager;
-(void)setSearchString:(NSString *)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)setSearchResults:(FCStreamingResults *)arg1 ;
-(FCStreamingResults *)searchResults;
-(void)setAssetManager:(FCAssetManager *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(FCTagRecordSource *)tagRecordSource;
-(FCCKDatabase *)contentDatabase;
-(id)initWithTagRecordSource:(id)arg1 contentDatabase:(id)arg2 assetManager:(id)arg3 searchString:(id)arg4 tagType:(unsigned long long)arg5 batchSize:(unsigned long long)arg6 ;
-(void)setSearchResultsBlock:(id)arg1 ;
-(void)setContentDatabase:(FCCKDatabase *)arg1 ;
-(void)setTagRecordSource:(FCTagRecordSource *)arg1 ;
-(unsigned long long)tagType;
-(void)setTagType:(unsigned long long)arg1 ;
-(void)setSearchError:(NSError *)arg1 ;
-(void)_performSearchQuery:(/*^block*/id)arg1 ;
-(id)searchResultsBlock;
-(NSError *)searchError;
-(id)_establishStreamOfTags;
@end

