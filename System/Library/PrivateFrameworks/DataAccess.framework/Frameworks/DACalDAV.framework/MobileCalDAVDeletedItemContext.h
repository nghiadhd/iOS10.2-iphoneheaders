/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface MobileCalDAVDeletedItemContext : NSObject {

	int _entityType;
	NSNumber* _rowid;

}

@property (nonatomic,retain) NSNumber * rowid;              //@synthesize rowid=_rowid - In the implementation block
@property (assign,nonatomic) int entityType;                //@synthesize entityType=_entityType - In the implementation block
-(void)setRowid:(NSNumber *)arg1 ;
-(NSNumber *)rowid;
-(void)setEntityType:(int)arg1 ;
-(int)entityType;
@end

