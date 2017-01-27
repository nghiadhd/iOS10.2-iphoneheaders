/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSArray, UIPrintPanelViewController, UIPrintingProgress, PKPrintSettings, UIPrintInfo, UIPrintPageRenderer, NSURL, NSMutableSet, PKPrinter, UIPrintPaper;

@interface UIPrintInteractionControllerInternals : NSObject {

	long long _pageCount;
	NSArray* _pageRanges;
	long long _currentPage;
	NSRange _currentRange;
	long long _pageCountWithRanges;
	long long _pagesDrawn;
	UIPrintPanelViewController* _printPanelViewController;
	UIPrintingProgress* _printingProgress;
	PKPrintSettings* _printSettings;
	UIPrintInfo* _activePrintInfo;
	int _printInfoState;
	BOOL _supressNotifyDismissed;
	UIPrintPageRenderer* _formatterRenderer;
	BOOL _manualPrintPageEnabled;
	NSURL* _saveFileURL;
	NSURL* _tempPreviewFileURL;
	NSMutableSet* _previewStates;
	PKPrinter* _printer;
	UIPrintPaper* _paper;

}

@property (assign) long long pageCount;                        //@synthesize pageCount=_pageCount - In the implementation block
@property (retain) NSArray * pageRanges;                       //@synthesize pageRanges=_pageRanges - In the implementation block
@property (assign) long long pageCountWithRanges;              //@synthesize pageCountWithRanges=_pageCountWithRanges - In the implementation block
@property (retain) NSMutableSet * previewStates;               //@synthesize previewStates=_previewStates - In the implementation block
@property (retain) NSURL * tempPreviewFileURL; 
@property (retain) PKPrinter * printer;                        //@synthesize printer=_printer - In the implementation block
@property (retain) UIPrintPaper * paper;                       //@synthesize paper=_paper - In the implementation block
-(id)init;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(long long)pageCount;
-(void)setPageCount:(long long)arg1 ;
-(NSArray *)pageRanges;
-(void)setPageRanges:(NSArray *)arg1 ;
-(UIPrintPaper *)paper;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(NSURL *)tempPreviewFileURL;
-(void)setTempPreviewFileURL:(NSURL *)arg1 ;
-(long long)pageCountWithRanges;
-(void)setPageCountWithRanges:(long long)arg1 ;
-(NSMutableSet *)previewStates;
-(void)setPreviewStates:(NSMutableSet *)arg1 ;
@end

