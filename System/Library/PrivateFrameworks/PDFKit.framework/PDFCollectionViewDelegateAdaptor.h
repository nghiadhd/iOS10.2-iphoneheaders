/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol PDFCollectionViewDelegate;
@class NSObject, NSString;

@interface PDFCollectionViewDelegateAdaptor : NSObject <UICollectionViewDelegate> {

	NSObject*<PDFCollectionViewDelegate> _wrappedDelegate;

}

@property (retain) NSObject*<PDFCollectionViewDelegate> wrappedDelegate;              //@synthesize wrappedDelegate=_wrappedDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setWrappedDelegate:(NSObject*<PDFCollectionViewDelegate>)arg1 ;
-(NSObject*<PDFCollectionViewDelegate>)wrappedDelegate;
@end

