/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Notes.siriUIBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NoteContext, NSMutableArray, UICollectionViewFlowLayout, UICollectionView, SiriUIContentCollectionViewCell, NSString;

@interface NotesAssistantSnippetController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	NoteContext* _htmlContext;
	NSMutableArray* _notes;
	UICollectionViewFlowLayout* _flowLayout;
	UICollectionView* _collectionView;
	SiriUIContentCollectionViewCell* _viewCell;
	NSString* _viewCellReuseIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAceObject:(id)arg1 error:(id*)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)desiredHeightForWidth:(double)arg1 ;
@end

