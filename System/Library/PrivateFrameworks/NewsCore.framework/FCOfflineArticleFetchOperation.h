/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCCloudContext, NSString, FCHeadline;

@interface FCOfflineArticleFetchOperation : FCMultiStepFetchOperation {

	FCCloudContext* _context;
	NSString* _articleID;
	FCHeadline* _headline;
	id _thumbnailFetchedObject;
	id _classificationFetchedObject;
	id _contentFetchedObject;

}

@property (nonatomic,retain) FCCloudContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * articleID;                          //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) FCHeadline * headline;                       //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) id thumbnailFetchedObject;                   //@synthesize thumbnailFetchedObject=_thumbnailFetchedObject - In the implementation block
@property (nonatomic,retain) id classificationFetchedObject;              //@synthesize classificationFetchedObject=_classificationFetchedObject - In the implementation block
@property (nonatomic,retain) id contentFetchedObject;                     //@synthesize contentFetchedObject=_contentFetchedObject - In the implementation block
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id)completeFetchOperation;
-(id)initWithContext:(id)arg1 articleID:(id)arg2 ;
-(FCHeadline *)headline;
-(void)setHeadline:(FCHeadline *)arg1 ;
-(id)fetchHeadlineWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchThumbnailWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchClassificationWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchContentWithCompletion:(/*^block*/id)arg1 ;
-(void)setThumbnailFetchedObject:(id)arg1 ;
-(void)setClassificationFetchedObject:(id)arg1 ;
-(void)setContentFetchedObject:(id)arg1 ;
-(id)classificationFetchedObject;
-(id)contentFetchedObject;
-(id)thumbnailFetchedObject;
@end

