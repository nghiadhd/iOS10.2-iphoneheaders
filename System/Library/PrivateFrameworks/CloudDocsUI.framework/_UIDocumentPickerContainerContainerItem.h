/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSString, BRContainer;

@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem {

	NSString* _cachedSubtitle;
	BRContainer* _container;

}

@property (nonatomic,readonly) BRContainer * container; 
-(id)url;
-(id)title;
-(long long)type;
-(BRContainer *)container;
-(id)subtitle;
-(id)sortDate;
-(id)initWithContainer:(id)arg1 ;
-(void)_modelChanged;
-(id)sortPath;
-(id)_blockingThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 wantsBorder:(BOOL*)arg3 ;
@end

