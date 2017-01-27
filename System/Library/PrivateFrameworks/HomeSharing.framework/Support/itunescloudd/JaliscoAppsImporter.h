/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/JaliscoImporter.h>

@class JaliscoAppLibrary, SSAppPurchaseHistoryDatabase, NSNumber;

@interface JaliscoAppsImporter : JaliscoImporter {

	JaliscoAppLibrary* _appCloudLibrary;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;
	NSNumber* _familyMemberStoreID;

}
+(id)oversizeLogCategory;
+(id)logCategory;
-(id)metadataKeys;
-(id)queryFilter;
-(id)purchaseTokens;
-(BOOL)includeFlavors;
-(unsigned)onDiskRevision;
-(id)updateLibraryFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withResponse:(id)arg3 ;
-(id)initWithLibrary:(id)arg1 purchaseHistoryDatabase:(id)arg2 familyMemberStoreID:(id)arg3 ;
-(void)_importTracksFromItemsResponseData:(id)arg1 ;
-(BOOL)includeHiddenItems;
-(id)familyMemberStoreID;
@end

