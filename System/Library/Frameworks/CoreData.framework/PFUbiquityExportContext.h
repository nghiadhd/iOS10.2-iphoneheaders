/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, PFUbiquityLocation;

@interface PFUbiquityExportContext : NSObject {

	NSMutableDictionary* _storeNameToStoreExportContext;
	NSMutableDictionary* _ubiquityRootPathToStack;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	BOOL _useLocalStorage;

}

@property (nonatomic,readonly) NSString * localPeerID;              //@synthesize localPeerID=_localPeerID - In the implementation block
@property (assign,nonatomic) BOOL useLocalStorage;                  //@synthesize useLocalStorage=_useLocalStorage - In the implementation block
-(NSString *)localPeerID;
-(id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)setUseLocalStorage:(BOOL)arg1 ;
-(id)storeExportContextForStoreName:(id)arg1 ;
-(id)storeExportContextForStore:(id)arg1 ;
-(BOOL)useLocalStorage;
-(void)dealloc;
-(id)description;
@end

