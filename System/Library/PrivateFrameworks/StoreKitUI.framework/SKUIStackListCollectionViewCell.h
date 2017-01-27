/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class NSMapTable, NSString;

@interface SKUIStackListCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView> {

	unsigned long long _alignment;
	NSMapTable* _listViews;

}

@property (assign,nonatomic) unsigned long long alignment;              //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) NSMapTable * listViews;                    //@synthesize listViews=_listViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAlignment:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)alignment;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(NSMapTable *)listViews;
-(BOOL)layoutSubviewsWithFlowLayout:(CGRect)arg1 size:(CGSize*)arg2 ;
-(BOOL)layoutSubviewsWithFixedWidth:(CGRect)arg1 size:(CGSize*)arg2 ;
-(BOOL)_isRightAligned;
-(void)setListViews:(NSMapTable *)arg1 ;
@end

