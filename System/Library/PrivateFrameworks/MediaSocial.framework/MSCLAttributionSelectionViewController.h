/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, SKUIMediaSocialAuthor, SKUIStyledImageDataConsumer, UIImage, SKUIResourceLoader, UITableView, NSString;

@interface MSCLAttributionSelectionViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSArray* _authors;
	SKUIMediaSocialAuthor* _destinationAuthor;
	SKUIStyledImageDataConsumer* _imageDataConsumer;
	UIImage* _placeholderImage;
	SKUIResourceLoader* _resourceLoader;
	long long _selectedAuthorIndex;
	/*^block*/id _selectionBlock;
	UITableView* _tableView;

}

@property (nonatomic,copy) NSArray * authors;                                      //@synthesize authors=_authors - In the implementation block
@property (nonatomic,copy) SKUIMediaSocialAuthor * destinationAuthor;              //@synthesize destinationAuthor=_destinationAuthor - In the implementation block
@property (assign,nonatomic) long long selectedAuthorIndex;                        //@synthesize selectedAuthorIndex=_selectedAuthorIndex - In the implementation block
@property (nonatomic,copy) id selectionBlock;                                      //@synthesize selectionBlock=_selectionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_placeholderImage;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)_attributedTitleForAuthor:(id)arg1 ;
-(id)_imageForAuthor:(id)arg1 ;
-(id)selectionBlock;
-(id)_imageDataConsumer;
-(SKUIMediaSocialAuthor *)destinationAuthor;
-(void)setDestinationAuthor:(SKUIMediaSocialAuthor *)arg1 ;
-(long long)selectedAuthorIndex;
-(void)setSelectedAuthorIndex:(long long)arg1 ;
-(void)setSelectionBlock:(id)arg1 ;
-(NSArray *)authors;
-(void)setAuthors:(NSArray *)arg1 ;
@end

