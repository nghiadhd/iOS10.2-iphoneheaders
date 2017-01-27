/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VUSocialUpload/FlickrRequest.h>

@protocol FlickrComposeOptionViewDelegate, FlickrPhotoSetTableDelegate;
@class NSArray;

@interface FlickrPhotoSetManager : FlickrRequest {

	id<FlickrComposeOptionViewDelegate> _delegate;
	id<FlickrPhotoSetTableDelegate> _tableDelegate;
	NSArray* _photoSets;

}

@property (assign,nonatomic,__weak) id<FlickrComposeOptionViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FlickrPhotoSetTableDelegate> tableDelegate;              //@synthesize tableDelegate=_tableDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * photoSets;                                             //@synthesize photoSets=_photoSets - In the implementation block
-(void)setDelegate:(id<FlickrComposeOptionViewDelegate>)arg1 ;
-(id<FlickrComposeOptionViewDelegate>)delegate;
-(NSArray *)photoSets;
-(void)refreshPhotoSets;
-(id<FlickrPhotoSetTableDelegate>)tableDelegate;
-(void)setTableDelegate:(id<FlickrPhotoSetTableDelegate>)arg1 ;
@end

