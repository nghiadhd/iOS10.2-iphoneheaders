/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIItemListTableDelegate <NSObject>
@optional
-(BOOL)itemList:(id)arg1 canRemoveItemAtIndexPath:(id)arg2;
-(void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
-(void)itemList:(id)arg1 willDisplayCellForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemListWillBeginDragging:(id)arg1;
-(id)itemList:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
-(id)itemList:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;

@end

