/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TSUColor;

@interface TSAExportableDocumentType : NSObject {

	NSString* _type;
	NSString* _localizedName;
	TSUColor* _exportFormatChooserItemTextColor;
	NSString* _exportProgressMessage;

}

@property (nonatomic,readonly) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) TSUColor * exportFormatChooserItemTextColor;              //@synthesize exportFormatChooserItemTextColor=_exportFormatChooserItemTextColor - In the implementation block
@property (nonatomic,readonly) NSString * exportProgressMessage;                         //@synthesize exportProgressMessage=_exportProgressMessage - In the implementation block
+(id)exportableTypeWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 exportProgressMessage:(id)arg4 ;
+(id)exportableTypeWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 ;
-(id)initWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 exportProgressMessage:(id)arg4 ;
-(TSUColor *)exportFormatChooserItemTextColor;
-(NSString *)exportProgressMessage;
-(void)dealloc;
-(id)description;
-(NSString *)type;
-(NSString *)localizedName;
@end

