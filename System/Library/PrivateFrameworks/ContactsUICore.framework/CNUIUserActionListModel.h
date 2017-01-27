/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUIUserActionItem, NSArray;

@interface CNUIUserActionListModel : NSObject {

	CNUIUserActionItem* _defaultAction;
	NSArray* _actions;
	NSArray* _directoryServiceActions;
	NSArray* _foundOnDeviceActions;

}

@property (nonatomic,retain) CNUIUserActionItem * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * directoryServiceActions;                 //@synthesize directoryServiceActions=_directoryServiceActions - In the implementation block
@property (nonatomic,copy) NSArray * foundOnDeviceActions;                    //@synthesize foundOnDeviceActions=_foundOnDeviceActions - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
+(id)emptyModel;
-(void)setActions:(NSArray *)arg1 ;
-(id)description;
-(NSArray *)actions;
-(BOOL)isEmpty;
-(CNUIUserActionItem *)defaultAction;
-(id)allActions;
-(void)setDefaultAction:(CNUIUserActionItem *)arg1 ;
-(NSArray *)directoryServiceActions;
-(NSArray *)foundOnDeviceActions;
-(id)initWithDefaultAction:(id)arg1 actions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4 ;
-(id)initWithModel:(id)arg1 actions:(id)arg2 ;
-(void)setDirectoryServiceActions:(NSArray *)arg1 ;
-(void)setFoundOnDeviceActions:(NSArray *)arg1 ;
@end

