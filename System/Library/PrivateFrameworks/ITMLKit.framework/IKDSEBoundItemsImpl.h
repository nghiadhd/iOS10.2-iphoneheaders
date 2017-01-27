/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/IKJSDataItemObserver.h>
#import <libobjc.A.dylib/IKDataSourceElementImplementing.h>
#import <libobjc.A.dylib/IKDOMBindingControllerDelegate.h>

@class NSMutableDictionary, IKDataSourceElement, IKDOMBindingController, NSArray, IKElementChangeSet, IKAppDataSet, NSDictionary, NSMutableIndexSet, NSString;

@interface IKDSEBoundItemsImpl : NSObject <IKJSDataItemObserver, IKDataSourceElementImplementing, IKDOMBindingControllerDelegate> {

	NSMutableDictionary* _instantiatedDOMElementsByItemID;
	BOOL _visibleIndexRangeIsDirty;
	IKDataSourceElement* _dataSourceElement;
	IKDOMBindingController* _bindingController;
	NSArray* _prototypes;
	IKElementChangeSet* _itemsChangeset;
	IKAppDataSet* _dataSet;
	NSDictionary* _usedPrototypesByType;
	NSDictionary* _childrenByItemID;
	NSMutableIndexSet* _visibleIndexSet;
	NSMutableDictionary* _virtualChildrenByItemID;

}

@property (nonatomic,readonly) IKDOMBindingController * bindingController;                  //@synthesize bindingController=_bindingController - In the implementation block
@property (nonatomic,retain) NSArray * prototypes;                                          //@synthesize prototypes=_prototypes - In the implementation block
@property (nonatomic,retain) IKElementChangeSet * itemsChangeset;                           //@synthesize itemsChangeset=_itemsChangeset - In the implementation block
@property (nonatomic,retain) IKAppDataSet * dataSet;                                        //@synthesize dataSet=_dataSet - In the implementation block
@property (nonatomic,copy) NSDictionary * usedPrototypesByType;                             //@synthesize usedPrototypesByType=_usedPrototypesByType - In the implementation block
@property (nonatomic,copy) NSDictionary * childrenByItemID;                                 //@synthesize childrenByItemID=_childrenByItemID - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * visibleIndexSet;                           //@synthesize visibleIndexSet=_visibleIndexSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * virtualChildrenByItemID;                 //@synthesize virtualChildrenByItemID=_virtualChildrenByItemID - In the implementation block
@property (nonatomic,__weak,readonly) IKDataSourceElement * dataSourceElement;              //@synthesize dataSourceElement=_dataSourceElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)areItemsBoundForBinding:(id)arg1 ;
+(BOOL)_isPrototypeDOMElement:(id)arg1 validForReuseWithID:(id)arg2 ;
-(void)initialize;
-(long long)numberOfItems;
-(void)teardown;
-(void)setDataSet:(IKAppDataSet *)arg1 ;
-(IKAppDataSet *)dataSet;
-(void)configureUpdatesWithImplementation:(id)arg1 ;
-(void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(/*^block*/id)arg2 ;
-(long long)indexOfItemForChildElement:(id)arg1 ;
-(id)initWithDataSourceElement:(id)arg1 ;
-(void)domBindingController:(id)arg1 didLoadBinding:(id)arg2 ;
-(BOOL)domBindingController:(id)arg1 doKeysAffectChildren:(id)arg2 ;
-(BOOL)domBindingController:(id)arg1 doKeysAffectSubtree:(id)arg2 ;
-(id)additionalKeysToResolveForDOMBindingController:(id)arg1 ;
-(BOOL)domBindingController:(id)arg1 applyValue:(id)arg2 forKey:(id)arg3 ;
-(void)domBindingController:(id)arg1 didResolveKeys:(id)arg2 ;
-(void)updateStylesUsingUpdater:(/*^block*/id)arg1 ;
-(IKDataSourceElement *)dataSourceElement;
-(void)setItemsChangeset:(IKElementChangeSet *)arg1 ;
-(NSDictionary *)usedPrototypesByType;
-(NSDictionary *)childrenByItemID;
-(NSMutableDictionary *)virtualChildrenByItemID;
-(void)setVirtualChildrenByItemID:(NSMutableDictionary *)arg1 ;
-(void)_appendVisibleIndexSetWithIndex:(long long)arg1 ;
-(NSMutableIndexSet *)visibleIndexSet;
-(IKDOMBindingController *)bindingController;
-(id)_itemsPropertyPath;
-(void)setVisibleIndexSet:(NSMutableIndexSet *)arg1 ;
-(id)_prototypeForType:(id)arg1 ;
-(void)setUsedPrototypesByType:(NSDictionary *)arg1 ;
-(void)setChildrenByItemID:(NSDictionary *)arg1 ;
-(void)setPrototypes:(NSArray *)arg1 ;
-(void)_applyItemsValueWithItems:(id)arg1 domBindingController:(id)arg2 ;
-(void)_applyVisibleIndexRangeValueWithRange:(NSRange)arg1 domBindingController:(id)arg2 ;
-(void)_applyUpdatedIndexesValueWithIndexes:(id)arg1 domBindingController:(id)arg2 ;
-(void)_applyAutoHighlightedIndexesValueWithIndexes:(id)arg1 domBindingController:(id)arg2 ;
-(void)_appendUpdatedIndexesWithIndex:(long long)arg1 ;
-(void)_appendAutoHighlightedIndexesWithIndex:(long long)arg1 ;
-(id)_appDataItemFromJSDataItem:(id)arg1 ;
-(id)_instantiateItemAtIndex:(long long)arg1 domBindingController:(id)arg2 ;
-(void)dataItem:(id)arg1 didChangeSubPropertyPathWithString:(id)arg2 forPropertyPathWithString:(id)arg3 subscriptIndex:(long long)arg4 ;
-(id)prototypeForItemAtIndex:(long long)arg1 ;
-(id)elementForItemAtIndex:(long long)arg1 loadIfNeeded:(BOOL)arg2 ;
-(void)unloadIndex:(long long)arg1 ;
-(NSArray *)prototypes;
-(IKElementChangeSet *)itemsChangeset;
@end

