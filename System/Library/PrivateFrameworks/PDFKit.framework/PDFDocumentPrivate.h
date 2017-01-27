/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFDocumentPageChangeDelegate;
#import <PDFKit/PDFKit-Structs.h>
@class NSURL, NSMutableArray, NSDictionary, NSString, PDFOutline, NSMapTable, NSOperationQueue, NSArray, PDFSelection, PDFForm;

@interface PDFDocumentPrivate : NSObject {

	CGPDFDocumentRef document;
	NSURL* documentURL;
	int documentId;
	NSMutableArray* pages;
	id delegate;
	BOOL respondsToDidUnlock;
	BOOL respondsToDidFindMatch;
	BOOL respondsToDidBeginDocumentFind;
	BOOL respondsToDidEndDocumentFind;
	BOOL respondsToDidBeginPageFind;
	BOOL respondsToDidEndPageFind;
	BOOL respondsToDidMatchString;
	BOOL respondsToPrintJobTitle;
	BOOL respondsToClassForPage;
	BOOL respondsToClassForAnnotation;
	unsigned long long pageCount;
	int majorVersion;
	int minorVersion;
	BOOL isEncrypted;
	BOOL isUnlocked;
	BOOL allowsPrinting;
	BOOL allowsCopying;
	long long permission;
	NSDictionary* attributes;
	NSString* password;
	PDFOutline* outline;
	NSMapTable* pageDictionaryMap;
	NSOperationQueue* pageLayoutThreadQueue;
	NSOperationQueue* dataDetectorQueue;
	BOOL finding;
	int findModel;
	NSArray* findStrings;
	PDFSelection* findInstance;
	unsigned long long findOptions;
	long long findPageIndex;
	long long findCharIndex;
	long long lastFindPageIndex;
	long long lastFindCharIndex;
	NSMutableArray* findResults;
	BOOL sortAnnotations;
	PDFForm* formData;
	BOOL formDataLoaded;
	NSArray* documentCatalogMetadata;
	NSString* xmpNameSpace;
	NSString* xmpPrefix;
	NSString* xmpRootPath;
	id<PDFDocumentPageChangeDelegate> pageChangeDelegate;
	DDScannerRef dataDetector;

}
@end

