/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@protocol PDFCollectionViewDelegate, PDFCollectionViewDataSource;
@class UIColor;

@interface PDFCollectionView : UICollectionView {

	id<PDFCollectionViewDelegate> _pdfDelegate;
	id<PDFCollectionViewDataSource> _pdfDataSource;
	UIColor* _pdfBackgroundColor;
	id _delegateAdaptor;
	id _dataSourceAdaptor;

}

@property (nonatomic,retain) id<PDFCollectionViewDelegate> pdfDelegate;                  //@synthesize pdfDelegate=_pdfDelegate - In the implementation block
@property (nonatomic,retain) id<PDFCollectionViewDataSource> pdfDataSource;              //@synthesize pdfDataSource=_pdfDataSource - In the implementation block
@property (nonatomic,copy) UIColor * pdfBackgroundColor;                                 //@synthesize pdfBackgroundColor=_pdfBackgroundColor - In the implementation block
+(Class)classForPlatform;
+(id)instanceForPlatform;
-(void)setPdfDelegate:(id<PDFCollectionViewDelegate>)arg1 ;
-(id<PDFCollectionViewDelegate>)pdfDelegate;
-(void)setPdfDataSource:(id<PDFCollectionViewDataSource>)arg1 ;
-(void)setPdfBackgroundColor:(UIColor *)arg1 ;
-(id<PDFCollectionViewDataSource>)pdfDataSource;
-(UIColor *)pdfBackgroundColor;
@end

