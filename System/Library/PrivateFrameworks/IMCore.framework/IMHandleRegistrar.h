/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMHandleRegistrar : NSObject {

	id _internal;

}

@property (assign,nonatomic) long long nameStyle; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_accountsChanged:(id)arg1 ;
-(id)allIMHandles;
-(void)_dumpOutAllIMHandlesForAccount:(id)arg1 ;
-(void)clearSiblingCacheForIMHandle:(id)arg1 ;
-(void)registerIMHandle:(id)arg1 ;
-(void)unregisterIMHandle:(id)arg1 ;
-(void)_clearAccountSiblingsForGUID:(id)arg1 handle:(id)arg2 ;
-(void)_clearChatSiblingsForGUID:(id)arg1 handle:(id)arg2 ;
-(BOOL)_buildingChatSiblings;
-(id)_existingAccountSiblingsForHandle:(id)arg1 ;
-(id)_accountSiblingsForHandle:(id)arg1 ;
-(id)_existingChatSiblingsForHandle:(id)arg1 ;
-(id)_chatSiblingsForHandle:(id)arg1 ;
-(id)siblingsForIMHandle:(id)arg1 ;
-(void)_emptySiblingCacheForIMHandleGUID:(id)arg1 ;
-(void)_buildSiblingsForIMHandle:(id)arg1 ;
-(void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(BOOL)arg2 ;
-(void)_addressBookChanged;
-(long long)nameStyle;
-(void)setNameStyle:(long long)arg1 ;
-(void)_dumpOutAllIMHandles;
@end

