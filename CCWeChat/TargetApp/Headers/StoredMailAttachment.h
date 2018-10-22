//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSString;

@interface StoredMailAttachment : NSObject <NSCoding>
{
    unsigned int type;
    unsigned int dataSize;
    NSString *objectId;
    NSString *objectName;
    NSData *data;
    NSString *attachID;
}

@property(retain, nonatomic) NSString *attachID; // @synthesize attachID;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize;
@property(retain, nonatomic) NSData *data; // @synthesize data;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *objectName; // @synthesize objectName;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
