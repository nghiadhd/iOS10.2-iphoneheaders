/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _DPToolArguments : NSObject {

	BOOL _verbose;
	BOOL _readWriteAccess;
	NSString* _command;
	NSString* _arguments;
	NSString* _recordKey;
	NSString* _databasePath;

}

@property (nonatomic,copy,readonly) NSString * command;                   //@synthesize command=_command - In the implementation block
@property (nonatomic,copy,readonly) NSString * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,readonly) BOOL verbose;                              //@synthesize verbose=_verbose - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL readWriteAccess;                      //@synthesize readWriteAccess=_readWriteAccess - In the implementation block
+(id)usage;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)verbose;
-(NSString *)command;
-(NSString *)arguments;
-(NSString *)databasePath;
-(id)job;
-(NSString *)recordKey;
-(BOOL)readWriteAccess;
@end
