/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, PDFSelection, NSMutableDictionary, CALayer, UIImage;

@interface PDFPageSearchLayerPrivate : NSObject {

	PDFPage* page;
	long long displayBox;
	PDFSelection* selection;
	NSMutableDictionary* selectionRects;
	BOOL isOnFirstPage;
	BOOL isOnLastPage;
	CGRect firstPageRect;
	CGRect lastPageRect;
	CALayer* selectionStartHandle;
	CALayer* selectionEndHandle;
	UIImage* magnifierImage;
	CALayer* magnifierLayer;
	CGSize magnifierSize;
	BOOL isZooming;

}
@end

