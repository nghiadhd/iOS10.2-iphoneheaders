/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSMutableArray, UILabel, PBBridgeBarcode, UIView;

@interface PBBridgeBarcodeStickerView : UIView {

	UIImageView* _matteView;
	UIImageView* _barcodeView;
	NSMutableArray* _stickerConstraints;
	NSMutableArray* _matteConstraints;
	UILabel* _altTextLabel;
	BOOL _drawBarcode;
	PBBridgeBarcode* _barcode;

}

@property (nonatomic,retain) PBBridgeBarcode * barcode;              //@synthesize barcode=_barcode - In the implementation block
@property (nonatomic,readonly) UIView * matteView;                   //@synthesize matteView=_matteView - In the implementation block
+(CGSize)_sizeForBarcode:(id)arg1 ;
+(PKBarcodeQuietZone)_quiteZoneForBarcode:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateValidity;
-(id)initWithBarcode:(id)arg1 ;
-(void)setBarcode:(PBBridgeBarcode *)arg1 ;
-(PBBridgeBarcode *)barcode;
-(CGSize)_varianceForBarcode:(id)arg1 ;
-(id)_resizedBarcode:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)_generateMatteRect:(CGRect*)arg1 barcodeRect:(CGRect*)arg2 altTextRect:(CGRect*)arg3 boundingSize:(CGSize)arg4 ;
-(UIView *)matteView;
@end

